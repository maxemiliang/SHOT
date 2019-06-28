/**
   The Supporting Hyperplane Optimization Toolkit (SHOT).

   @author Andreas Lundell, Åbo Akademi University

   @section LICENSE
   This software is licensed under the Eclipse Public License 2.0.
   Please see the README and LICENSE files for more information.
*/

#pragma once

#include "TaskBase.h"

#include "../Structs.h"

namespace SHOT
{
class TaskSolveFixedDualProblem : public TaskBase
{
public:
    TaskSolveFixedDualProblem(EnvironmentPtr envPtr);
    ~TaskSolveFixedDualProblem() override;
    void run() override;
    std::string getType() override;

private:
    VectorInteger discreteVariableIndexes;
    std::vector<VectorDouble> testedPoints;

    VectorDouble lastSolution;

    int totalIters = 0;
};
} // namespace SHOT