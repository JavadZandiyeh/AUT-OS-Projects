# xv6 Operating System
- contributors
> phase1 & phase2: [JavadZandiyeh](https://github.com/JavadZandiyeh)<br/>
> phase3: [JavadZandiyeh](https://github.com/JavadZandiyeh) & [rajabi2001](https://github.com/rajabi2001) -> [XV6_Scheduling](https://github.com/rajabi2001/XV6_Scheduling)

## Phase 1: Adding new System Calls into xv6-public
- start with [xv6-public](https://github.com/mit-pdos/xv6-public)
- `int getProcCount(void)`
> counting number of processes
- `int getReadCount(void)`
> counting number of read processes

## Phase 2: Thread Handling
- `thread_creator`
> creates a new thread
- `thread_create systemcall`
> using thread_creator to create a new thread

## Phase 3: xv6 Scheduling
- Scheduling Policy
> Round Robin(changing Quantum)
> non-preemptive priority scheduling
> preemptive priority scheduling
> multilayer priority queue
- Change Policy
- Measuring Times
> Waiting Time
> Turn Around Time
> CPU Burst Time
> Ready Time
> Running Time
> Termination Time
> Creation Time
> Sleeping Time
- Test
> roundRobinTest
> PrioritySchedTest
> MultiLayerQueueTest
> DynamicMultiLayerQueueTest
