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
> Round Robin(changing Quantum)<br/>
> non-preemptive priority scheduling<br/>
> preemptive priority scheduling<br/>
> multilayer priority queue
- Change Policy
- Measuring Times
> Waiting Time<br/>
> Turn Around Time<br/>
> CPU Burst Time<br/>
> Ready Time<br/>
> Running Time<br/>
> Termination Time<br/>
> Creation Time<br/>
> Sleeping Time
- Test
> roundRobinTest<br/>
> PrioritySchedTest<br/>
> MultiLayerQueueTest<br/>
> DynamicMultiLayerQueueTest
