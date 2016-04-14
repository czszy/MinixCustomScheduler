# Custom Minix Scheduler
Custom processes scheduler for Minix 2.0 done for my studies project

User processes are divided into three group: A, B, C. By default new processes are added to group A.
Each group has own amount of system ticks to use and after processing single process current group changes like in chain.
User can use system interrupts to change process group or group time quantum.

# Example
We have processes lists defined: A1, B1, B2

And group A has 100ms time, while B has 200ms.

So it means execution flow will be:

* A1 - 100ms
* B2 - 200ms
* A1 - 100ms
* B2 - 200ms

repeat..


and as you can see this algorithm is fairly simple and justice.

In this set each process used 200ms in total.
