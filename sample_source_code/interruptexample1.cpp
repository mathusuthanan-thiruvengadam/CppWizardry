//#include <asm/irq.h>
#include <linux/signal.h>
#include <linux/sched.h>
#include <linux/interrupt.h>


irqreturn_t myhandler (int intno, void *dev){
	cout<<"interrupt\n";
	return RQ_HANDLED;
}

int main ( void ){
	request_irq(1, myhandler, IRQF_SHARED , "keyboardhandler", "keyboardhandler");
}