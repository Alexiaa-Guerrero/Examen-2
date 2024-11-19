#include <stdio.h>
int main ()
{
  int i, j, comp, valid, mayor;
  int arr[10][100] = {{}, {}, {}};
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 100; j++)
      {
        arr[i][j] = 0;
      }
  }

  while (valid = 0);
    {
      printf("Para registrar el número de componentes de un aparato ingrese el número del aparato del 0 al 9: ");
      scanf("%d", &i);
      printf("Ingrese el número del componente del 0 al 99");
      scanf("%d", &j);
      printf("Ingrese el número de componentes que desea registrar: ");
      scanf("%d", &comp);
      arr[i][j] = comp;
      printf("Si desea agregar el registro de otro componente, escriba 0, si no, 1");
      scanf("%d", &valid);  
    }

  mayor = arr[0][0];
  
  for (i = 0; i < 10; i++)
  {
    for (j = 1; j < 100; j++)
      {
        printf("Del aparato %d y componente %d hay %d\n", i, j, arr[i][j]);
        if(arr[i][j] > arr[0][0])
        {
          mayor = arr[i][j];
          mayUno = i;
          mayDos = j;
        }
      }
  }
  
  printf("El componente eléctrico que más se usa es del aparato %d componente %d con %d componentes", mayUno, mayDos, mayor);
  return 0;
}
