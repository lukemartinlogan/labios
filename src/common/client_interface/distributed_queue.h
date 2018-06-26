/*******************************************************************************
* Created by hariharan on 2/23/18.
* Updated by akougkas on 6/26/2018
* Illinois Institute of Technology - SCS Lab
* (C) 2018
******************************************************************************/
#ifndef AETRIO_MAIN_DISTRIBUTEDQUEUE_H
#define AETRIO_MAIN_DISTRIBUTEDQUEUE_H
/******************************************************************************
*include files
******************************************************************************/
#include <memory>
#include "../enumerations.h"
#include "../data_structures.h"
#include <nats.h>
#include "../external_clients/serialization_manager.h"
#include "../exceptions.h"
/******************************************************************************
*Class
******************************************************************************/
class distributed_queue {
protected:
/******************************************************************************
*Variables and members
******************************************************************************/
    service service_i;
/******************************************************************************
*Constructor
******************************************************************************/
    explicit distributed_queue(service service):service_i(service){}
public:
/******************************************************************************
*Interface
******************************************************************************/
    virtual int publish_task(task *task_t){
        throw NotImplementedException("publish_task");
    }
    virtual task * subscribe_task_with_timeout( int &status){
        throw NotImplementedException("subscribe_task_with_timeout");
    }

    virtual task * subscribe_task( int &status){
        throw NotImplementedException("subscribe_task");
    }

    virtual int get_queue_size(){
        throw NotImplementedException("get_queue_size");
    }
    virtual int get_queue_count(){
        throw NotImplementedException("get_queue_count");
    }
    virtual int get_queue_count_limit(){
        throw NotImplementedException("get_queue_count");
    }
/******************************************************************************
*Destructor
******************************************************************************/
    virtual ~distributed_queue(){}
};


#endif //AETRIO_MAIN_DISTRIBUTEDQUEUE_H
