#include <compare>

class Nec {
public:
	constexpr Nec(long i) noexcept
		: m_val{ i } {
	}
	
	// == ve != için
	[[nodiscard]] bool operator==(const Nec& other)const 
	{
		return m_val == other.m_val; 
	}

	// < <= > >= için
	auto operator<=> (const Nec& rhs) const 
	{
		return m_val <=> rhs.m_val; // defines ordering (<, <=, >, and >=)
	}
private:
	int m_val;
	//...
};
