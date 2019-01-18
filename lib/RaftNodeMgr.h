/************************************************
 *      Filename: RaftNodeMgr.h
 *   Descprition: RAFT节点信息(所有节点)
 *        Author: hemingchen@tencent.com
 *       Created: 2019-01-19 17:55:16
 ***********************************************/
#pragma once
#include "BaseLog.h"

struct RaftNodeData
{
    uint16_t    wNodeID;
    uint8_t     bState;
    int         iSvrAddr;
};

class CRaftNodeMgr
{
public:


private:
    uint16_t        m_wNodeCnt;
    RaftNodeData    m_astNode[RAFT_MAX_NODE_NUM];
};