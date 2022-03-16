"C++ CLASS GENERATOR: OPENING 2 NEW FILES

function! Class(arg)

	let ClassName=a:arg
	let UpperClassName=toupper(a:arg)

	let cppContent = []
	:call add(cppContent, "#include \"".ClassName.".hpp\"")
	:call add(cppContent, "")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "/*            CONSTRUCTEURS/DESTRUCTEURS       */")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "")
	:call add(cppContent, "//Constructeur par default")
	:call add(cppContent, "".ClassName."::".ClassName."(void)")
	:call add(cppContent, "{")
	:call add(cppContent, "	//std::cout << \"".ClassName." default constructor called.\" << std::endl;")
	:call add(cppContent, "	return ;")
	:call add(cppContent, "}")
	:call add(cppContent, "")
	:call add(cppContent, "//Constructeur par copie")
	:call add(cppContent, "".ClassName."::".ClassName."(".ClassName." const & copy)")
	:call add(cppContent, "{")
	:call add(cppContent, "	//std::cout << \"".ClassName." copy constructor called.\" << std::endl;")
	:call add(cppContent, "	*this = copy;")
	:call add(cppContent, "	return ;")
	:call add(cppContent, "}")
	:call add(cppContent, "")
	:call add(cppContent, "//Destructeur")
	:call add(cppContent, "".ClassName."::~".ClassName."(void)")
	:call add(cppContent, "{")
	:call add(cppContent, "	//std::cout << \"".ClassName." destructor called.\" << std::endl;")
	:call add(cppContent, "	return ;")
	:call add(cppContent, "}")
	:call add(cppContent, "")
	:call add(cppContent, "")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "/*             SURCHARGE D'OPERATEURS          */")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "")
	:call add(cppContent, "//Operateur d'affectation (=)")
	:call add(cppContent, "".ClassName." const &	".ClassName."::operator = (".ClassName." const & rhs)")
	:call add(cppContent, "{")
	:call add(cppContent, "	//this->_var = rhs._var;")
	:call add(cppContent, "	return (*this);")
	:call add(cppContent, "}")
	:call add(cppContent, "")
	:call add(cppContent, "")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "/*             OPERATEURS ARITHMETIQUES        */")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "/*            OPERATEURS D'INCREMENTATION      */")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "/*             OPERATEURS DE COMPARAISON       */")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "/*                FONCTIONS MEMBRES            */")
	:call add(cppContent, "/***********************************************/")
	:call add(cppContent, "")
	

	let hppContent = []
	:call add(hppContent, "#ifndef ".UpperClassName."_HPP")
	:call add(hppContent, "#define ".UpperClassName."_HPP")
	:call add(hppContent, "")
	:call add(hppContent, "#include <iostream>")
	:call add(hppContent, "")
	:call add(hppContent, "class	".ClassName."")
	:call add(hppContent, "{")
	:call add(hppContent, "")
	:call add(hppContent, "	public:")
	:call add(hppContent, "")
	:call add(hppContent, "		".ClassName."(void);										// Constructeur par default")
	:call add(hppContent, "		".ClassName."(".ClassName." const & copy);						// Constructeur par copie")
	:call add(hppContent, "		~".ClassName."(void);									// Destructeur")
	:call add(hppContent, "		".ClassName." const &	operator = (".ClassName." const & rhs);	// Surcharge d'opérateur d’affectation")
	:call add(hppContent, "")
	:call add(hppContent, "")
	:call add(hppContent, "	private:")
	:call add(hppContent, "")
	:call add(hppContent, "")
	:call add(hppContent, "} ;")
	:call add(hppContent, "")
	:call add(hppContent, "#endif")

    :execute 'write'
	:execute "e " .ClassName.".hpp" 
	:execute "Stdheader"
	call append(12, hppContent)
    :execute 'write'

	:execute "vs " .ClassName.".cpp" 
	:execute "Stdheader"
	call append(12, cppContent)
    :execute 'write'
    
	:execute 'NERDTreeFocus'
	call feedkeys("r")
	call feedkeys("\<C-w>")
	call feedkeys("\<C-w>")

endfunction
