from unittest import TestCase

class ImportModuleTestCase(TestCase):

    def import_module_test(self):
        import cimport
        cimport.install()

        import test_module
        self.assertEqual(test_module.s, "yo!")
