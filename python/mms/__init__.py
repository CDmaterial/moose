try:
    import sympy

except ImportError:
    print("The 'mms' package requires sympy, it can be installed by running " \
          "`pip install sympy --user`.")

else:
    from fparser import FParserPrinter, fparser, print_fparser, build_hit, print_hit
    from moosefunction import MooseFunctionPrinter, moosefunction, print_moose
    from evaluate import evaluate
    from runner import run_spatial, run_temporal

try:
    import os
    import matplotlib
    if not os.getenv('DISPLAY', False):
        matplotlib.use('Agg')


except ImportError:
    print("The 'mms' package requires matplotlib, it can be installed by running " \
          "`pip install matplotlib --user`.")

else:
    from ConvergencePlot import ConvergencePlot
