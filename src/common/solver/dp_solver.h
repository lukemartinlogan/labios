/*******************************************************************************
* Created by hariharan on 5/18/18.
* Updated by akougkas on 6/30/2018
* Illinois Institute of Technology - SCS Lab
* (C) 2018
******************************************************************************/
#ifndef AETRIO_MAIN_DPSOLVER_H
#define AETRIO_MAIN_DPSOLVER_H
/******************************************************************************
*include files
******************************************************************************/
#include "solver.h"
#include "../data_structures.h"
/******************************************************************************
*Class
******************************************************************************/
class DPSolver : public solver {
private:
/******************************************************************************
*Variables and members
******************************************************************************/
    int* calculate_values(solver_input input,int num_bins);
    int* worker_score;
    int64_t* worker_capacity;
    int* worker_energy;

public:
/******************************************************************************
*Constructor
******************************************************************************/
    explicit DPSolver(service service)
            :solver(service){
        worker_score=new int[MAX_WORKER_COUNT];
        worker_capacity=new int64_t[MAX_WORKER_COUNT];
        worker_energy=new int[MAX_WORKER_COUNT];
    }
/******************************************************************************
*Interface
******************************************************************************/
    solver_output solve(solver_input input) override;
/******************************************************************************
*Destructor
******************************************************************************/
    virtual ~DPSolver(){}
};


#endif //AETRIO_MAIN_DPSOLVER_H
