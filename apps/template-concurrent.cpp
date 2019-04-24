// This code is part of the project "Krill"
// Copyright (c) 2019 Hongzheng Chen

#include "krill.h" // the underlying facility of krill
// include the singleton tasks you have written below
#include "template-singleton.h"
using namespace std;

template <class vertex>
void setKernels(graph<vertex>&G, Kernels& K, commandLine P)
{
	/**
	 * This function inputs three arguments, including
	 ** G: The graph class encapsulates the input graph
	 ** K: The container manages all the graph tasks
	 ** P: The command line manager
	 *
	 * Firstly, you should create an instance for each of your tasks
	 * by using the `new` method.
	 * Notice you need to pass `G.n` as the first argument
	 * of your task class, or some errors may occur.
	 *
	 * You can create your task instance and append them into the
	 * kernel container `K` via `appendTask`.
	 * You can append the task one at a time, or append them
	 * using the initialized list in C++.
	 * The following two methods are valid.
	 *
	 * > K.appendTask(task1);
	 * > K.appendTask({task1,task2,task3});
	 * 
	 * For command line options, you can read them from `P`
	 * For example, to read the source vertex index of BFS,
	 * you can write
	 *
	 * > long start = P.getOptionLongValue("-r",0);
	 *
	 * The second argument of `getOptionValue` is the default value
	 * of the return.
	 * Notice the command line arguments should not be conflict
	 * with `-s`, `-w`, `-c`, `-b`, and `-rounds`,
	 * all of which have special meaning in Krill.
	 */
	MyTask* mytask = new MyTask(G.n);
	K.appendTask(mytask);
}