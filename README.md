# Liskov principle violation example

An example app that illustrates the violation of Liskov substitution principal, written in several languages.

This is a companion repository to a blog post on Liskov substitution principle that you can read [here](https://qua.name/antolius/liskov-substitution-principle). It contains the same example app written in C, Vala and Python. You can run each of them and should get the same result.

## Running examples

You can compile and run `app.c` with:

```bash
gcc `pkg-config --cflags gtk+-3.0` -o app app.c `pkg-config --libs gtk+-3.0` && ./app
```

To compile and run `app.vala` execute:

```bash
valac --pkg gtk+-3.0 app.vala && ./app
```

Finally you can run `app.py` with Python 3:

```bash
python app.py
```

All app versions should compile successfully and fail with segmentation fault at startup.

## License

Distributed under the MIT License. See `LICENSE` for more information.

## Authors

- Josip Antoliš - [Antolius](https://github.com/Antolius)
