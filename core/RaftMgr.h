/************************************************
 *      Filename: RaftMgr.h
 *   Descprition: RAFT一致性管理类
 *        Author: hemingchen@tencent.com
 *       Created: 2019-01-18 21:04:41
 ***********************************************/

#pragma once
#include "Define.h"
#include "BaseLog.h"
#include "BaseMsg.h"
#include "RaftLogMgr.h"
#include "RaftNodeMgr.h"

class CRaftMgr
{
public:
    int Init();

    int HandleMsg(CBaseMsg &stMsg);

private:
    uint16_t            m_wNodeID;      //节点ID
    EnmRaftNodeState    m_eNodeState;   //节点状态
    uint32_t            m_dwCurrTerm;   //当前任期号
    uint16_t            m_wVoteFor;     //投票节点
    time_t              m_tHBTimeOut;   //随机心跳超时

    CRaftNodeMgr        m_oNodeMgr; //集群节点信息
    CRaftLogMgr         m_oLogMgr;  //日志管理器
};
