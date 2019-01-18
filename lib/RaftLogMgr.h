/************************************************
 *      Filename: RaftLogMgr.h
 *   Descprition: RAFT日志管理
 *        Author: hemingchen@tencent.com
 *       Created: 2019-01-19 17:40:41
 ***********************************************/
#pragma once
#include "BaseLog.h"

class CRaftLogMgr
{
public:
    CRaftLogMgr() {}
    virtual ~CRaftLogMgr() {}

private:
    uint64_t    ullCommitIdx;   //当前已提交条目
    uint64_t    ullAppliedIdx;  //当前已应用条目
};