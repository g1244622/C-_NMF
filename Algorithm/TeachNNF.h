#ifndef _TEACHNMF
#define _TEACHNMF

#include <math.h>
#include <map>

#include "Array2D.h"

using namespace std;

template <class T> class TeachNMF
{

private:
  int _class_Total;

  map<int,int> _labelMap;

  int _vector_length;

  Array2D<T> _dictionary;

  T* _excitation;

  T _beta;

public:
  TeachNMF()
  {

  }

  ~TeachNMF()
  {

  }


  void _init(int class_Total,int vector_length)
  {
    _class_Total = class_Total;
    _vector_length = vector_length;

    _dictionary._setSize(_class_Total,_vector_length);
  }


  void _setTeach(int label,T* data)
  {
    if(_labelMap.size() < _class_Total)
    {
      if(_labelMap.find(label) == _labelMap.end())  _labelMap.insert(pair<int,int>(label,_labelMap.size()));
    }
    else
    {
      cout << "Teach Over" << endl;
    }
    _dictionary._clear(_labelMap.at(label));
    _dictionary._setVector(_labelMap.at(label),data);
    return;
  }



  void _process(T* data)
  {

  }

};

#endif
