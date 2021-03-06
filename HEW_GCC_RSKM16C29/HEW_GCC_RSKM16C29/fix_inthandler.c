/***********************************************************************/
/*                                                                     */
/*  FILE        :fix_inthandler.c                                      */
/*  DATE        :Sat, Feb 14, 2015                                     */
/*  DESCRIPTION :fixed vector table definitions.                       */
/*  CPU GROUP   :29(ROM128K)                                           */
/*                                                                     */
/*  This file is generated by KPIT GNU Project Generator.              */
/*                                                                     */
/***********************************************************************/

/***************************************************************************
 *  Fixed Vector for M16C/60,30,20,10   
 *
 *  Function:define fixed vector
 *
 **************************************************************************/
 
void UndefinedInstruction_ISR(void) __attribute__ ((interrupt));
void Overflow_ISR(void) __attribute__ ((interrupt));
void BRK_Instruction_ISR(void) __attribute__ ((interrupt));
void AddressMatch_ISR(void) __attribute__ ((interrupt));
void SingleStep_ISR(void) __attribute__ ((interrupt));
void WatchdogTimer_ISR(void) __attribute__ ((interrupt));
void DBC_ISR(void) __attribute__ ((interrupt));
void NMI_ISR(void) __attribute__ ((interrupt)); 

void UndefinedInstruction_ISR(void)
{
    /*add your code here*/
}
void Overflow_ISR(void)
{
    /*add your code here*/
}
void BRK_Instruction_ISR(void)
{
    /*add your code here*/
}
void AddressMatch_ISR(void)
{
    /*add your code here*/
}
void SingleStep_ISR(void)
{
    /*add your code here*/
}
void WatchdogTimer_ISR(void)
{
    /*add your code here*/
}
void DBC_ISR(void)
{
    /*add your code here*/
}
void NMI_ISR(void)
{
    /*add your code here*/
}

