#ifndef FLOATRANGE_H
#define FLOATRANGE_H

class FloatRange {
private:
  double first;
  double second;

public:
  double GetFirst() const;
  double GetSecond() const;

  bool SetFirst(double first);
  bool SetSecond(double second);

  void Init();
  void Read();

  bool rangeCheck(double value) const;
};

#endif // FLOATRANGE_H