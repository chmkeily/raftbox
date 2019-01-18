/************************************************
 *      Filename: BaseMsg.h
 *   Descprition: 消息
 *        Author: hemingchen@tencent.com
 *       Created: 2019-01-19 17:22:50
 ***********************************************/
 
#pragma once
#include <stdint.h>

#define MAX_MSG_BUFF_SIZE   102400

class CBaseMsg
{
public:
    CBaseMsg();
    virtual ~CBaseMsg();

private:
    uint8_t     m_bMsgType;
    char        m_szMsgBuff[MAX_MSG_BUFF_SIZE];
};