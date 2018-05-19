//
// Created by hariharan on 2/16/18.
//

#ifndef PORUS_MAIN_ENUMERATION_H
#define PORUS_MAIN_ENUMERATION_H

enum request_status{
    COMPLETED = 0,
    PENDING =1
};

enum message_type{
    METADATA=0,
    DATASPACE=1
};
enum operation{
    WRITE=0,
    READ=1,
    DELETE=2,
    FLUSH=3
};
enum map_type{
    META_FH=0,
    META_CHUNK=1
};
enum source_type{
    FILE_LOC=0,
    DATASPACE_LOC=1
};
enum service{
    LIB=0,
    CLIENT=1,
    SYSTEM_MANAGER=2,
    TASK_SCHEDULER=3,
    WORKER=4,
    WORKER_MANAGER=5
};
enum class task_type:int64_t{
    READ_TASK=0,
    WRITE_TASK=1,
    FLUSH_TASK=2,
    DELETE_TASK=3,
    DUMMY=4,
};

enum table{
    FILE_DB=0,
    FILE_CHUNK_DB=1,
    CHUNK_DB=2,
    SYSTEM_REG=3,
    DATASPACE_DB=4,
    WORKER_SCORE=5,
    WORKER_CAPACITY=6,
    TASK_DB=7
};
enum map_impl_type{
    ROCKS_DB=0,
    MEMCACHE_D=1
};
enum queue_impl_type{
    NATS=0
};
enum solver_impl_type{
    DP=0,
    GREEDY=1
};
enum io_client_type{
    POSIX=0
};

#endif //PORUS_MAIN_ENUMERATION_H
