# Dotfiles

Configuration files and utilities.

## Configurations

- [iTerm2]
- [Karabiner] ([Seil])
- git
- htop
- keymap
- [neovim]
- gdb
- gpg-agent
- inputrc
- psql
- ssh
- tmux
- zsh

[iTerm2]: https://www.iterm2.com/downloads.html
[Karabiner]: https://pqrs.org/osx/karabiner/
[Seil]: https://pqrs.org/osx/karabiner/seil.html.en
[neovim]: https://github.com/neovim/neovim/wiki/Installing-Neovim

## Install

Create symlinks in ~ for files in the current directory.

    ./install.sh

## Import

Import a file from ~ and replace it with a symlink.

    ./import.sh .dotrc

## Prune

Remove symbolic links in ~ to files that no longer exist in the current
directory.

    ./prune.sh

## Vendor

Pull latest versions of vendored files.

    ./vendor.sh

## License

Copyright © 2015, Curtis McEnroe <curtis@cmcenroe.me>

Permission to use, copy, modify, and/or distribute this software for any
purpose with or without fee is hereby granted, provided that the above
copyright notice and this permission notice appear in all copies.

THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
