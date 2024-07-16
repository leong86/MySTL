#include <initializer_list>



namespace mystl
{
	#ifdef max
	#pragma message("#undefing marco max")
	#undef max
	#endif // max
	    
	#ifdef min
	#pragma message("#undefing marco min")
	#undef min
	#endif // min
	
	template <class T>
	class vector
	{
		static_assert(!std::is_same<bool, T>::value, "vector<bool> is abdndoned in mystl");
		public:
      		  typedef mystl::allocator<T> allocator_type;
		  typedef mystl::allocator<T> data_allocator;


        // Additional member functions can be declared here.
    	};
	
}
