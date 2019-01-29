#include "RaftMgr.h"
#include "core_proto.pb.h"

int CRaftMgr::Init()
{
    // Verify that the version of the library that we linked against is
    // compatible with the version of the headers we compiled against.
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    return 0;
}

int CRaftMgr::HandleMsg(CBaseMsg &stMsg)
{
    return 0;
}
