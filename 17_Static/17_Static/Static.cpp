
static int m_Variable = 4; 

int m_Var2 = 3;

//static keyword --> linkage internal of that symbol declared as static, solo visible en la unidad de traduccion donde se ha definido, similar a cuando se declaran symbolos privados en clases o structs

//Tip: utiliza siempre static en variables globales para que no sean linkadas a traves de todas las unidades de traducci�n (cpp files). De esta manera se reducen bugs. Si una variable global no se define como static, has de tener en cuenta que el linker buscara si esa variable ha sido llamada en otros files ya que recordemos que si el linker encuentra una variable definida en un cpp, aunque no sereferencie en ese mismo cpp, cabe la posibilidad que se haya llamado en otro cpp por lo que el linker se forcar� a rebuscar en TODAS las unidades de traducci�n. 

//Tip: Otra cosa a tener encuenta con las variables globales es de no repetir su identificador en otros cpp porque sino el linker encontrar�a multiples definiciones y provocara errores, a no ser que se haga la declaraci�n de ese identificador con la keyword extern, entonces buscar� su referencia a la definici�nde esa variable global 

//Resumen: Utiliza variables globales siempre que quieras usarlas y manipularlas en diferentes cpp, por lo que deberas tener cuidado ya que el linker se forcar� a buscar la definici�n de dicha variable global siempre que se referenci� en otras unidades de traducci�n.