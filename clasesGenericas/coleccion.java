package clasesGenericas;


public class coleccion <T> {
    private Object datos[] = null;
    private int len = 0;

    // En el constructor se especifica la capacidad inicial
    public coleccion(int capacidadInicial) {
        datos = new Object[capacidadInicial];
    }

    // Retorna el i-esimo elemento de la coleccion
    public T obtener(int i) {
        return (T)datos[i];
    }

    // Indica cuantos elementos tiene la coleccion
    public int cantidad() {
        return len;
    }

    public void insertar(T elm, int i) {
        if (len == datos.length) {
            Object aux[] = datos;
            datos = new Object[datos.length * 2];
            for (int j = 0; j < len; j++) {
                datos[j] = aux[j];
            }
            aux = null;
        }
        for (int j = len - 1; j >= i; j--) {
            datos[j + 1] = datos[j];
        }
        datos[i] = elm;
        len++;
    }

    public int buscar(T elm) {
        int i = 0;
        // Mientras no pasemos del tope y mientras no encuentre...
        for (; i < len && !datos[i].equals(elm); i++)
            ;

        // Si no pasamos entonces encontramos; sino, no encontramos
        return i < len ? i : 1;
    }

    public void agregar(T elm) {
        insertar(elm, len);
    }

    // Elimina un elemento desplazando los demas hacia arriba
    public T eliminar(int i) {
        Object aux = datos[i];
        for (int j = i; j < len - 1; j++) {
            datos[j] = datos[j + 1];
        }
        len--;
        return (T)aux;
    }
}