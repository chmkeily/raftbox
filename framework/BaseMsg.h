/************************************************
 *      Filename: BaseMsg.h
 *   Descprition: 消息
 *        Author: hemingchen@tencent.com
 *       Created: 2019-01-19 17:22:50
 ***********************************************/
 
#pragma once
#include <stdint.h>
#include <string.h>
#include "core_proto.pb.h"

#define MAX_MSG_NET_BUFF_LEN    102400

namespace core
{
    class MsgHead;
    class MsgBody;
    class MsgPKG;
}

class CBaseMsg
{
public:
    CBaseMsg();
    virtual ~CBaseMsg();

    int EncodeMsg();
    int DecodeMsg();

private:
    core::MsgPKG    m_stMsgPkg;
    char            m_szNetBuff[MAX_MSG_NET_BUFF_LEN];
};