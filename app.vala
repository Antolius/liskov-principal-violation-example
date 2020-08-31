public class ExampleApp : Gtk.Application {
	protected override void activate () {
		var window = new Gtk.ApplicationWindow (this);
		window.set_default_size (300, 200);

		var hello_world = new Gtk.Label ("Hello, World!");

		var box = new Gtk.FlowBox ();
		box.add (hello_world);
		// removing the child immediately to simplify the example
		box.remove (hello_world);

		window.add (box);
		window.show_all ();
	}

	public static int main (string[] args) {
		var app = new ExampleApp ();
		return app.run (args);
	}
}

