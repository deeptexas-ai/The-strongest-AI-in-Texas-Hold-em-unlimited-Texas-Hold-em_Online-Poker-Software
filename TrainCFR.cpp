#include <stdio.h>
#include <stdlib.h>
#include <string>

#include "ActionModule.h"
#include "CardCluster.h"
#include "CardAbst.h"
#include "constants.h"
#include "DiskFiles.h"
#include "GameInfo.h"
#include "FileOperation.h"
#include "CFRProcess.h"

using std::string;

static void Usage(const char *prog_name)
{
  fprintf(stderr, "USAGE: %s  "
                  "<num threads> <start batch> <end batch> <batch size> <save interval> \n",
          prog_name);
  exit(-1);
}

int main(int argc, char *argv[])
{
  if (argc > 6)
    Usage(argv[0]);
        
  DiskFiles::Init(); 
  GameInfo::Initialize();
  unique_ptr<CardAbst>
  card_abstraction(new CardAbst());
  unique_ptr<ActionSetting> ba(new ActionSetting());

  int num_threads, start_batch, end_batch, batch_size, save_interval;  

  if (sscanf(argv[1], "%i", &num_threads) != 1)
    Usage(argv[0]);
  if (sscanf(argv[2], "%i", &start_batch) != 1)
    Usage(argv[0]);
  if (sscanf(argv[3], "%i", &end_batch) != 1)
    Usage(argv[0]);
  if (sscanf(argv[4], "%i", &batch_size) != 1)
    Usage(argv[0]);
  if (sscanf(argv[5], "%i", &save_interval) != 1)
    Usage(argv[0]);
  int target_p = -1;
 
  if (save_interval == 0)
  {
    fprintf(stderr, "save_interval must not be zero\n");
    exit(-1);
  }

  fprintf(stderr, "Version:1.1.9. --- no boost && read sump_from 145 \n");

  CardCluster buckets(*card_abstraction, false); 
  CFRProcess cfr(*card_abstraction, *ba, buckets, num_threads, target_p);
  cfr.Run(start_batch, end_batch, batch_size, save_interval);

}
