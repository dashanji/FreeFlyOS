该目录主要为同步操作的实现，包含信号量和锁。

信号量是这样的，初始化为1，表示最多只有1个进程能够获取，每个进程都可以竞争获取这个信号量，获取后，信号量的值变为0，表示该信号量已被占用，其他需要这个信号量的进程全部进入等待队列。

锁实际上也可以看作是信号量，但比它多了一个步骤，就是当锁被一个进程持有时，它申请锁多少次，在释放的时候就要释放多少次。

