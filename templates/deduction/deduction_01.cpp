template<typename T>
class TypeTeller;


template<typename T>
void func(T &&)
{
	TypeTeller<T> x;
}


int main()
{
	int a{};
	//func(10);
	//func(a);
}
