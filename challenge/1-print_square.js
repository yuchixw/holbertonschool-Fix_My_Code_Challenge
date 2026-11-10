#!/usr/bin/node

const args = process.argv.slice(2);

if (args.length > 0) {
    const size = parseInt(args[0], 10);
    if (!isNaN(size) && size > 0) {
        for (let i = 0; i < size; i++) {
            let row = '';
            for (let j = 0; j < size; j++) {
                row += '#';
            }
            console.log(row);
        }
    }
}
