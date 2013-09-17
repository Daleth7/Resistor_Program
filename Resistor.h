#ifndef RESISTORS_H__
#define RESISTORS_H__

inline constexpr long double parallelResistance(long double R1, long double R2)
    {return 1/( (1/R1) + (1/R2) );}

template <typename... FloatPack>
long double parallelResistance(long double R1, long double R2, FloatPack... ResPack)
    {return 1/( (1/R1) + (1/parallelResistance(R2, ResPack...)) );}

inline constexpr long double serialResistance(long double R1, long double R2)
    {return R1+ R2;}

template <typename... FloatPack>
long double serialResistance(long double R1, long double R2, FloatPack... ResPack)
    {return R1 + serialResistance(R2, ResPack...);}

#endif