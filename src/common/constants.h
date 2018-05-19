//
// Created by hariharan on 2/16/18.
//

#ifndef PORUS_MAIN_CONSTANTS_H
#define PORUS_MAIN_CONSTANTS_H

#include <cstddef>
#include <climits>
#include <string>

const std::string PORUS_CLIENT_PORT = "9999";
const size_t KEY_SIZE = 256;
const size_t FILE_SIZE = 256;
const long long MAX_DATA_SIZE = 2 * 1024 * 1024 * 1024;
const size_t CHUNK_SIZE = 2 * 1024 * 1024;
const long long MAX_MESSAGE_SIZE = LLONG_MAX;
const std::string ALL_KEYS = "ALL";
const std::string kDBPath_client = "/tmp/rocksdb";
const std::string kDBPath_server = "/tmp/rocksdb";
const map_impl_type map_impl_type_t = map_impl_type::MEMCACHE_D;
const solver_impl_type solver_impl_type_t = solver_impl_type::DP;
const queue_impl_type queue_impl_type_t = queue_impl_type::NATS;
const io_client_type io_client_type_t = io_client_type::POSIX;
const size_t io_unit_max = 2 * 1024 * 1024;
const std::string CLIENT_TASK_SUBJECT = "TASK";
const std::string KEY_SEPARATOR = "#";
const size_t MAX_WORKER_COUNT = 2;
const std::string WORKER_TASK_SUBJECT[MAX_WORKER_COUNT] = {"1","2"/*,"3","4"*/};
const int WORKER_SPEED[MAX_WORKER_COUNT] = {1,2/*,3,1*/};
const int WORKER_ENERGY[MAX_WORKER_COUNT] = {1, 2 /*,3, 1*/};
const int64_t WORKER_CAPACITY_MAX[MAX_WORKER_COUNT] = {10485760, 20971520/*, 31457120, 20971520*/};
const int WORKER_ATTRIBUTES_COUNT=5;
const float POLICY_WEIGHT[WORKER_ATTRIBUTES_COUNT] = {.3,.2,.3,.1,.1};
const size_t MAX_TASK=4;
const size_t MAX_TASK_TIMER=2;
const size_t MAX_TASK_TIMER_MS=MAX_TASK_TIMER*100000;
const size_t MAX_TASK_TIMER_MS_MAX=MAX_TASK_TIMER*1000000;
const size_t WORKER_MANAGER_INTERVAL=5;
const size_t SYSTEM_MANAGER_INTERVAL=5;
const std::string WORKER_PATH="/home/cc/temp";

#endif //PORUS_MAIN_CONSTANTS_H
