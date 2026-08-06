#include "common/macros.h"
#include "common/nndef.h"
#include "common/nnlogic.h"
#include "gameroot.h"
#include "utils/tarslog.h"
#include "context/context.h"
#include "head.pb.h"


using namespace nndef;

namespace game
{
    namespace logic
    {
        namespace clientlogic
        {
            void DebugCards(long uid, const vector<char> &vecMsgData, GameRoot *root)
            {
                __TRY__

                using namespace context;
                using namespace nnlogic;

                XGameSoProto::TSoDebugCard shcm4 = pbToObj<XGameSoProto::TSoDebugCard>(vecMsgData);
                DLOG_TRACE("roomid:" << root->roomid() << ",DebugCards. shcm4: "<< logPb(shcm4));

                root->con->clearDebugCards();
                for(auto debughdcard : shcm4.mdebughdcard())
                {
                    for(auto card : debughdcard.second.vcards())
                    {
                        if(!nnlogic::checkcard(atoi(card.c_str())))
                        {
                            DLOG_TRACE("roomid:" << root->roomid() << ",DebugCards. card err cid: "<< debughdcard.first << ", card:"<< card);
                            continue;
                        }
                        else
                        {
                            root->con->addDebugCard(atoi(debughdcard.first.c_str()), atoi(card.c_str()));
                        }
                    }
                }
               
                __CATCH__
            }
        }
    }
}
