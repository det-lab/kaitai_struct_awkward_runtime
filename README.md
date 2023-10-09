# Awkward Array Kaitai Cookiecutter

A [copier][] template for building Python packages from Kaitai Struct `.ksy`


## To use

Install `copier`. Using [pipx][], that's:

```bash
pipx install copier
```

Now, run copier to generate your project:

```bash
copier copy gh:ManasviGoyal/kaitai_awkward_runtime <pkg>
```

(`<pkg>` is the path to put the new project)

You will get a nice CLI experience with answer validation. You will also get a
`.copier-answers.yml` file, which will allow you to perform updates in the
future.

> Note: Add `--vcs-ref=HEAD` to get the latest version instead of the last
> tagged version.



[copier]: https://copier.readthedocs.io
[pipx]: https://pypa.github.io/pipx/
