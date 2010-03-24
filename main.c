/*
** main for project in /u/all/ancel_a/cu/travail/c/
**
** Made by francois1 ancel
** Login   <ancel_a@epitech.net>
**
** Started on  Tue Mar 23 13:05:26 2010 francois1 ancel
** Last update Tue Mar 23 13:05:26 2010 francois1 ancel
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<pthread.h>
#include	"define.h"
#include	"t_phil.h"
#include	"t_table.h"
#include	"table_fct.h"
#include	"phil_fct.h"

int		main()
{
  int		err;
  pthread_t	thd[NB_PHIL];
  t_table	table;

  table_init(&table);
  err = phil_creat(thd, &table);
  if (err == EXIT_FAILURE)
    perror("phil_creat fail");
  pthread_exit(NULL);
  table_display(&table);
}