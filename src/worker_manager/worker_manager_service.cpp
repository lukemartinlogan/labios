//
// Created by hdevarajan on 5/14/18.
//

#include <zconf.h>
#include "worker_manager_service.h"
#include "../common/constants.h"
std::shared_ptr<worker_manager_service> worker_manager_service::instance = nullptr;
void worker_manager_service::run() {
    while(!kill) {
        sleep(WORKER_MANAGER_INTERVAL);
        sort_worker_score();
    }
}

int worker_manager_service::sort_worker_score() {
    return 0;
}


