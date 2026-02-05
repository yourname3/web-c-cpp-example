main.wasm: main.c
	clang \
		-target wasm32 \
		main.c -o main.wasm \
		-nostdlib -nostdinc \
		-Wl,--export-all -Wl,--no-entry -Wl,--allow-undefined