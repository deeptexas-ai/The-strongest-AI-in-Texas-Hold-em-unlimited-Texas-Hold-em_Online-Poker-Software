#pragma once

#include "utils/tarslog.h"

// 游戏配置信息
//#define FDLOG_GAME_CONFIG_INFO ((FDLOGINS("game_config_info#__GAMEID__")->any()) << __FILE__ << ":" << __LINE__ << ":" << __FUNCTION__ << "|")
#define FDLOG_GAME_CONFIG_INFO ((FDLOGINS(LOGNAME(game_config_info_so))->any()) << __FILE__ << ":" << __LINE__ << ":" << __FUNCTION__ << "|")

//插件配置信息
//#define FDLOG_PLUGIN_CONFIG_INFO ((FDLOGINS("plugin_config_info#__GAMEID__")->any()) << __FILE__ << ":" << __LINE__ << ":" << __FUNCTION__ << "|")
#define FDLOG_PLUGIN_CONFIG_INFO ((FDLOGINS(LOGNAME(plugin_config_info_so))->any()) << __FILE__ << ":" << __LINE__ << ":" << __FUNCTION__ << "|")