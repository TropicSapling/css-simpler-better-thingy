import other-styles; // imports 'other_styles.css' (or other extension for this lang)

// Global variables like in Sass.
$def-txt-color: black;

// We say text is black by default,
// then override later for text in grid.
p {
	color: $def-txt-color;
}

// Your "rules" basically but with different syntax.
// '$bg-color: black' defines a variable with default value 'black'
grid($bg-color: black, $txt-color: white, $space-between-elements) {
	grid: obj1 obj2 obj3
		  ____ obj4 ____  // underscore '_' for blank space
		  obj5 obj6 obj7;

	grid-gap: $space-between-elements;

	color: $bg-color; // 'color' is background-color on non-text elements

	p {
		color: $txt-color; // 'color' is text-color on text elements
		font-size: 
	}

	obj {
		width: height: 200px; // same width & height
		color: blue; // grid elements blue by default
	}

	obj4 {
		color: red; // override for this grid element only
	}
}