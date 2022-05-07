#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/sched/signal.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Norman Betancourtt, Hector Mendez y Rebeca Servellon");
MODULE_DESCRIPTION("Primer proyecto programado de Sistemas Operativos");

struct task_struct *task;

// esta funciòn se llama cuando el modulo es cargado al kernel
static int __init moduloInit(void){

	
	for_each_process(task){
	
	printk(KERN_INFO "pid: %d | pname: %s | state: %ld\n", task->pid, task->comm, task->state);
	
	}
	
	printk("Setso\n");
 	return 0;
}

// esta funcion se llama cuando el modulo es removido del kernel
static void __exit moduloExit(void) {
	printk("Goodbye, World!\n");
}

module_init(moduloInit);
module_exit(moduloExit);
