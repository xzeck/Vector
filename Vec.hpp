#ifndef Vec2_hpp
#define Vec2_hpp

namespace vec 
{
	template<typename T>
	class Vec2 
	{ 
	public: 
		T x; 
		T y;

		Vec2(T x, T y) : x(x), y(y)
		{}

		Vec2() : x(0), y(0)
		{}

		Vec2(T n) : x(n), y(n)
		{}

		template<typename T>
		constexpr Vec2<T>& operator+= (const Vec2<T>& right)
		{
			x += right.x;
			y += right.y; 

			return *this;
		}

		constexpr Vec2<T>& operator-= (const Vec2<T>& right)
		{
			x -= right.x;
			y -= right.y;

			return *this;
		}

		constexpr Vec2<T>& operator*= (const Vec2<T>& right)
		{
			x *= right.x;
			y *= right.y;

			return *this;
		}

		constexpr Vec2<T>& operator/= (const Vec2<T>& right)
		{
			x /= right.x;
			y /= right.y;

			return *this;
		}

		constexpr Vec2<T>& operator+ (const Vec2<T>& right)
		{
			Vec2<T> temp(*this);
			temp += right;

			return temp;
		}

		constexpr Vec2<T>& operator- (const Vec2<T>& right)
		{
			Vec2<T> temp(*this);
			temp -= right;
			
			return temp;
		}

		constexpr Vec2<T>& operator* (const Vec2<T>& right)
		{
			Vec2<T> temp(*this);
			temp *= right;
			
			return temp;
		}

		constexpr Vec2<T>& operator/ (const Vec2<T>& right)
		{
			Vec2<T> temp(*this);
			temp /= right;
			
			return temp;
		}


	};

		typedef Vec2<float>				vector2f;
		typedef Vec2<double>			vector2d;
		typedef Vec2<signed int>		vector2i;
		typedef Vec2<unsigned int>		vector2u;
		typedef Vec2<signed char>		vector2c;
		typedef Vec2<unsigned char>		vector2uc;
		typedef Vec2<signed long>		vector2l; 
		typedef Vec2<unsigned long>		vector2ul;
		typedef Vec2<signed long long>	vector2ll;
		typedef Vec2<unsigned long long>vector2ull;
}
#endif