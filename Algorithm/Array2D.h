#ifndef _A2D
#define _A2D
using namespace std;

template <class T> class Array2D
{
private:
  int _row;
  int _col;
  T** _value;

public:
  Array2D()
  {
    _row = 0;
    _col = 0;
    _value = NULL;
  }

  ~Array2D()
  {
    if(_value)
    {
      for(int i = 0;i < _row;i++)
      {
        if(_value[i]) delete [] _value[i];
      }
      delete [] _value;
    }
  }


  void _setSize(int row,int col)
  {
    if(_value)
    {
      cout << "set Done" << endl;
      return;
    }
    _row = row;
    _col = col;
    _value = new T*[_row];
    for(int i = 0;i < _row;i++)
    {
      _value[i] = new T[col+i];
    }

  }


  void _setVector(int row,T* vec)
  {
    if(0 > row || _row <= row)
    {
      cout << "Array2D Access Error" << endl;
      return;
    }
    memcpy(_value[row],vec,this->_col*sizeof(T));

  }


  void _clear()
  {
    for(int i = 0;i < _row;i++)
    {
      memset(_value[i],0,_col*sizeof(T));
    }
  }

  void _clear(int row)
  {
    if(_value[row])
      memset(_value[row],0,_col*sizeof(T));
  }


  inline T* operator[](unsigned int i){
    return(_value[i]);
  }
  inline const T* operator[](unsigned int i) const {
    return(_value[i]);
  }


};

#endif
