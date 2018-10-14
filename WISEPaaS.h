#ifndef _ADD_INT_H_
#define _ADD_INT_H_

#include "inc/EDGE_INC.h"
#include "inc/curl/curl.h"

int Constructor(TOPTION_STRUCT option);

int Connect();

int Disconnect();

int UploadConfig(ActionType action, TSCADA_CONFIG_STRUCT edgeConfig);
    
int SendData(TEDGE_DATA_STRUCT data);

int SendDeviceStatus(TEDGE_DEVICE_STATUS_STRUCT data);

#endif