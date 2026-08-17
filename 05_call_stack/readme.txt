backtrace/bt
	Show the full call stack — a list of frames — so you can see
	exactly how you got where you are

backtrace/bt -full
	Same as above, but also shows every frame's local variables

frame {fnum}
	Jump straight to the given frame number

up (optional) {num} (default 1)
	Move up {num} frames, toward older/calling frames

down (optional) {num} (default 1)
	Move down {num} frames, toward newer/called frames
