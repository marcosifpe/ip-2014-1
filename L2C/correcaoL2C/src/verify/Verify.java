package verify;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import org.junit.BeforeClass;
import org.junit.FixMethodOrder;
import org.junit.Test;
import org.junit.runners.MethodSorters;

@FixMethodOrder(MethodSorters.NAME_ASCENDING)
public class Verify {
	private static int questionNumber = 0;
	private static final String RESULT_PATTERN = "../q";
	private static final String EXPECTED_PATTERN = "results/";
	private static final Integer questions = 13;
	private static List<File> resultFiles = new ArrayList<File>();
	private static List<File> expectedFiles = new ArrayList<File>();

	@BeforeClass
	public static void setUpBeforeClass() throws Exception {
		for (int i = 1; i <= questions; ++i) {
			File file = new File(RESULT_PATTERN + i + "/" + "s" + i + ".txt");
			resultFiles.add(file);
		}
		
		for (int i = 1; i <= questions; ++i) {
			File file = new File(EXPECTED_PATTERN + "s" + i + ".txt");
			expectedFiles.add(file);
		}
	}
	
	public List<String> getLines(File file) throws IOException {
		List<String> lines = new ArrayList<String>();
		
		FileInputStream fileInputStream = null;
		DataInputStream dataInputStream = null;
		InputStreamReader inputStreamReader = null;
		BufferedReader bufferedReader = null;
		try {
			fileInputStream = new FileInputStream(file);
			dataInputStream = new DataInputStream(fileInputStream);
			inputStreamReader = new InputStreamReader(dataInputStream);
			bufferedReader = new BufferedReader(inputStreamReader);		
			String line;
			
			while ((line = bufferedReader.readLine()) != null)   {
				line = line.trim();
				if (line.length() > 0)
					lines.add(line.trim());
			}
			
		} catch (FileNotFoundException e) {			
			fail("Arquivo " + file.getName() + " n�o encontrado");
		} finally {
			if (bufferedReader != null)
				bufferedReader.close();
		}
		
		return lines;		
	}

	@Test
	public void testQ01() {
		compare();
	}
	
	@Test
	public void testQ02() {
		compare();
	}

	@Test
	public void testQ03() {
		compare();
	}
	
	@Test
	public void testQ04() {
		compare();
	}

	@Test
	public void testQ05() {
		compare();
	}
	
	@Test
	public void testQ06() {
		compare();
	}

	@Test
	public void testQ07() {
		compare();
	}
		
	@Test	
	public void testQ08() {
		compare();
	}

	@Test
	public void testQ09() {
		compare();
	}
	
	@Test
	public void testQ10() {
		compare();
	}
	
	@Test	
	public void testQ11() {
		compare();
	}
	
	@Test	
	public void testQ12() {
		compare();
	}

	
	@Test	
	public void testQ13() {
		compare();
	}
	

	private void compare() {
		compare(++questionNumber);
	}
	
	private void compare(int qn) {
		try {
			List<String> lines = getLines(resultFiles.get(qn - 1));
			List<String> expectedLines = getLines(expectedFiles.get(qn - 1)); 
			
			for (int i = 0; i < expectedLines.size(); i++) {
				try {
					assertEquals("Resultado n�o confere (linha " + (i + 1) + ", quest�o " + qn + ").", expectedLines.get(i), lines.get(i));
				} catch(IndexOutOfBoundsException ex) {
					fail("Arquivo gerado com quantidade inferior de linhas ao esperado. Quest�o " + qn);
				}
			}
		} catch (IOException e) {
			fail("erro na leitura do arquivo");
		}
	}
}