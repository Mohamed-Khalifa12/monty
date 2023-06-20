# 0x19. C - Stacks, Queues - LIFO, FIFO

## Learning Objectives
- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables

## File Structure (with order down->top Structuring)
- stack_queue_exchange.c
    * In this document, we employ stack and queue functions exclusively to determine whether an object belongs to a queue or a stack.
- add_node.c
    * In this document, we utilize two functions, namely `'addstackNode'` and `'addqueueNode,'` to insert elements into the stack and queue, respectively. `'addstackNode'` adds an element to the front of the stack, ensuring it will be the first one to be removed, while `'addqueueNode'` appends an element at the end of the queue, ensuring it will be the last one to be removed.
- push.c
    * In this document, we employ the `'push'` function to insert a new element into either the stack or queue, depending on the identification process (as specified in `'file 1'`).
- pall.c
    * This document includes a `'pall'` function that is responsible for displaying all the data stored in the stack.
- freestack.c
    * This document contains a `'free_stack'` function that is utilized to deallocate the memory used by the stack, effectively freeing it.
- execute.c
    * This document includes an `'execute'` function whose purpose is to compare a predefined function with the inputted function from the `'.m'` file and execute it accordingly.
- main.c 
    * In the main file, we open the `'.m'` file and sequentially read its contents line by line, executing each line along with its corresponding operation.
- pint.c
    * This document contains a `'pint'` function that is responsible for printing the top element of the stack.
- pop.c
    * This document includes a `'pop'` function whose purpose is to eliminate the top element from the stack.
- swap.c
    * "This file contains a `'swap'` function that is designed to interchange the positions of the top two elements in the stack.
- add.c 
    * In this file, we have an `'add'` function that is responsible for summing the top two elements in the stack.
- nop.c
    * This file includes a `'nop'` function that serves the purpose of performing no action or having no effect.