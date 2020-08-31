import gi
gi.require_version("Gtk", "3.0")
from gi.repository import Gtk

def on_activate(app):
    window = Gtk.ApplicationWindow(application=app)
    window.set_default_size(300, 200)

    hello_world = Gtk.Label(label="Hello, World!")

    box = Gtk.FlowBox()
    box.add(hello_world)
    # removing the child immediately to simplify the example
    box.remove(hello_world)

    window.add(box)
    window.show_all()

app = Gtk.Application(application_id='org.gtk.Example')
app.connect('activate', on_activate)
app.run(None)

