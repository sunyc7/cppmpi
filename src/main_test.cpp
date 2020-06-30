/***************************************************************************************************
 *  Project  :
 *  Function :
 *--------------------------------------------------------------------------------------------------
 *  Author   : Yao-Chong SUN
 *  Company  : SUSTECH, CHINA.
 *--------------------------------------------------------------------------------------------------
 *  Copyright 2020-2021. You should have received a copy of the GNU
 *  General Public License v3.0 along with ndg2d.
 *  If not, see <http://www.gnu.org/licenses/>.
***************************************************************************************************/
#include<mpi.h>
#include<iostream>
#include"struct_grid.h"
//--------------------------------------------------------------------------------------------------
int main(int argc, char**argv)
{
  int id,nb;

  MPI_Init(&argc,&argv);
  MPI_Comm_rank(MPI_COMM_WORLD,&id);
  MPI_Comm_size(MPI_COMM_WORLD,&nb);

  triMesh mesh;
  mesh.set(id);
  //std::cout<<"This id is "<<id<<" of "<<nb<<std::endl;

  return 0;
}
//**************************************************************************************************
// vim: ft=cpp:nu:nowrap
