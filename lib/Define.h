/************************************************
 *      Filename: Define.h
 *   Descprition: RAFT consensus module definitions
 *        Author: hemingchen@tencent.com
 *       Created: 2019-01-18 16:05:16
 ***********************************************/
 #pragma once

//RAFT一致性模块最大节点数
#define RAFT_MAX_NODE_NUM   15

//RAFT节点状态
enum EnmRaftNodeState
{
    RAFT_NODE_STAT_LEADER       = 1,    //Leader节点
    RAFT_NODE_STAT_CANDIDATE    = 2,    //候选人节点
    RAFT_NODE_STAT_FOLLOWER     = 3,    //Follower节点
}

//RAFT日志状态
enum EnmRaftLogState
{
    RAFT_LOG_STATE_REPLICATE    = 1,    //同步复制
    RAFT_LOG_STATE_COMMITTED    = 2,    //已提交
    RAFT_LOG_STATE_APPLIED      = 3,    //已应用
}

