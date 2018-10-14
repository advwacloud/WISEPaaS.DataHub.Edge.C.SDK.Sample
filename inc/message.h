#ifndef __MSG_H__
#define __MSG_H__

#include "EDGE_CONFIG.h"
#include "EDGE_DATA.h"
#include "EDGE_DEVICE_STATUS.h"

char * LastWillMessage();

char * DisconnectMessage();

void ParseConnectJson(bool secure, char *pMsg, char **host, char **user, char **pwd, int *port);

int DeviceStatusMessage(TEDGE_DEVICE_STATUS_STRUCT data, char **payload);

int SendDataMessage(TEDGE_DATA_STRUCT data, char **payload);

int ConvertCreateOrUpdateConfig(int action, TSCADA_CONFIG_STRUCT config, char **payload, int hbt);

int ConvertDeleteConfig(int action, TSCADA_CONFIG_STRUCT config, char **payload);

#endif