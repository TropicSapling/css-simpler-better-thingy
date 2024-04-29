let scroll  = 0;
let block   = false;
let blocker = setTimeout(() => block = false, 0);

// Always scroll the entire screen height
document.querySelector("body").addEventListener("wheel", e => {
	e.preventDefault();

	if(!block) {
		block = true;
		clearTimeout(blocker);

		scroll += e.deltaY < 0 ? -screen.height : screen.height;

		scrollTo({top: scroll, behavior: "smooth"})
	}

	blocker = setTimeout(() => block = false, 500)
}, {passive: false})
