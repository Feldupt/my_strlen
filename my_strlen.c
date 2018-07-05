int	my_strlen(char *str)
{
  int count = 0;
  
  while(str[count] != '\0')
    count++;
  return (count);
}

int	main(void)
{
  printf("%d", my_strlen("Hello"));
  return (0);
}
